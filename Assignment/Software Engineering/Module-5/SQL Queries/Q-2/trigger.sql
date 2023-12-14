-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 14, 2023 at 09:09 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `rikta`
--

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `Employee_id` int(11) NOT NULL,
  `First_name` varchar(30) DEFAULT NULL,
  `Last_name` varchar(50) DEFAULT NULL,
  `Salary` int(11) DEFAULT NULL,
  `Joining_date` varchar(30) DEFAULT NULL,
  `Department` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_id`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Abraham', 1000000, '01-JAN-13 12:00:00 AM', 'Banking'),
(2, 'Micheal', 'Clarke', 800000, '01-JAN-13 12:00:00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '01-FEB-13 12:00:00 AM', 'Banking'),
(4, 'Tom', 'Jose', 600000, '01-FEB-13 12:00:00 AM', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '01-FEB-13 12:00:00 AM', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '01-JAN-13 12:00:00 AM', 'Services'),
(7, 'Testname1', '123', 650000, '01-JAN-13 12:00:00 AM', 'Services'),
(8, 'Testname2', 'Lname%', 600000, '01-FEB-13 12:00:00 AM', 'Insurance');

--
-- Triggers `employee`
--
DELIMITER $$
CREATE TRIGGER `add_data` AFTER INSERT ON `employee` FOR EACH ROW BEGIN
    -- Insert the new record into ViewTable
    INSERT INTO `viewtable`(Employee_id, First_name, Last_name, Salary, Joining_date, Department)
    VALUES (NEW.Employee_id, NEW.First_name, NEW.Last_name, NEW.Salary, NEW.Joining_date, NEW.Department);
END
$$
DELIMITER ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`Employee_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `Employee_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
