-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 14, 2023 at 09:10 AM
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
-- Table structure for table `viewtable`
--

CREATE TABLE `viewtable` (
  `Employee_id` int(11) NOT NULL,
  `First_name` char(30) DEFAULT NULL,
  `Last_name` char(50) DEFAULT NULL,
  `Salary` int(11) DEFAULT NULL,
  `Joining_date` varchar(30) DEFAULT NULL,
  `Department` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Triggers `viewtable`
--
DELIMITER $$
CREATE TRIGGER `insert_data` AFTER INSERT ON `viewtable` FOR EACH ROW BEGIN
    -- Insert the new record into ViewTable
    INSERT INTO employee (Employee_id, First_name, Last_name, Salary, Joining_date, Department)
    VALUES (NEW.Employee_id, NEW.First_name, NEW.Last_name, NEW.Salary, NEW.Joining_date, NEW.Department);
END
$$
DELIMITER ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `viewtable`
--
ALTER TABLE `viewtable`
  ADD PRIMARY KEY (`Employee_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
