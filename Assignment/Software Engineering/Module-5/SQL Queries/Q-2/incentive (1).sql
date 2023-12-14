-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 11, 2023 at 04:14 PM
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
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `Employee_ref_id` int(11) DEFAULT NULL,
  `Incentive_date` varchar(30) DEFAULT NULL,
  `Incentive_amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Employee_ref_id`, `Incentive_date`, `Incentive_amount`) VALUES
(1, '01-FEB-13', 5000),
(2, '01-FEB-13', 3000),
(3, '01-FEB-13', 4000),
(1, '01-JAN-13', 4500),
(2, '01-JAN-13', 3500);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `incentive`
--
ALTER TABLE `incentive`
  ADD KEY `Employee_ref_id` (`Employee_ref_id`);

--
-- Constraints for dumped tables
--

--
-- Constraints for table `incentive`
--
ALTER TABLE `incentive`
  ADD CONSTRAINT `incentive_ibfk_1` FOREIGN KEY (`Employee_ref_id`) REFERENCES `employee` (`Employee_id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
