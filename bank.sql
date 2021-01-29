CREATE DATABASE  IF NOT EXISTS `bank` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `bank`;
-- MySQL dump 10.13  Distrib 8.0.20, for Win64 (x86_64)
--
-- Host: localhost    Database: bank
-- ------------------------------------------------------
-- Server version	8.0.20

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `loan_table`
--

DROP TABLE IF EXISTS `loan_table`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `loan_table` (
  `id` int NOT NULL,
  `loan_id` int NOT NULL,
  `loan_amount` double NOT NULL,
  `l_year` int NOT NULL,
  `l_month` int NOT NULL,
  `l_day` int NOT NULL,
  PRIMARY KEY (`id`,`loan_id`),
  CONSTRAINT `loan_table_ibfk_1` FOREIGN KEY (`id`) REFERENCES `new_table` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `loan_table`
--

LOCK TABLES `loan_table` WRITE;
/*!40000 ALTER TABLE `loan_table` DISABLE KEYS */;
INSERT INTO `loan_table` VALUES (1,100000101,16.2,2020,5,15);
/*!40000 ALTER TABLE `loan_table` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `money_table`
--

DROP TABLE IF EXISTS `money_table`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `money_table` (
  `id` int NOT NULL,
  `money_id` int NOT NULL,
  `amount` double NOT NULL,
  `m_year` int DEFAULT NULL,
  `m_month` int DEFAULT NULL,
  `m_day` int DEFAULT NULL,
  PRIMARY KEY (`id`,`money_id`),
  CONSTRAINT `money_table_ibfk_1` FOREIGN KEY (`id`) REFERENCES `new_table` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `money_table`
--

LOCK TABLES `money_table` WRITE;
/*!40000 ALTER TABLE `money_table` DISABLE KEYS */;
INSERT INTO `money_table` VALUES (1,2,30,2020,1,1),(1,100000101,100,2020,5,14),(1,100000102,10,2020,5,15),(1,100000103,10,2020,5,16),(1,100000104,1,2020,5,14),(123456,1,20,2001,1,1);
/*!40000 ALTER TABLE `money_table` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `new_table`
--

DROP TABLE IF EXISTS `new_table`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `new_table` (
  `id` int NOT NULL,
  `name` varchar(45) NOT NULL,
  `passwd` varchar(45) NOT NULL,
  `money` double NOT NULL,
  `type` int NOT NULL,
  `credit` int NOT NULL,
  `economy_ability` int NOT NULL,
  `loan` double NOT NULL,
  `loan_class` int NOT NULL,
  `loan_year` int NOT NULL,
  `loan_month` int NOT NULL,
  `loan_day` int NOT NULL,
  `sex` varchar(45) NOT NULL,
  `age` int NOT NULL,
  `create_year` int NOT NULL,
  `create_month` int NOT NULL,
  `create_day` int NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `new_table`
--

LOCK TABLES `new_table` WRITE;
/*!40000 ALTER TABLE `new_table` DISABLE KEYS */;
INSERT INTO `new_table` VALUES (1,'yixin','1',159.91,2,60,100,16.2,2,2020,7,16,'F',20,0,0,0),(2,'yixi','2',1000,2,100,100,0,0,0,0,0,'F',21,0,0,0),(3520,'yiyi','8520',1030,2,100,20,0,0,0,0,0,'M',24,0,0,0),(123456,'王一','1',100,2,100,10,0,1,0,0,0,'M',23,2020,5,15),(852963,'Anthony','0',50,1,100,100,0,10,0,0,0,'M',25,2020,5,17);
/*!40000 ALTER TABLE `new_table` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-05-17 22:53:22
