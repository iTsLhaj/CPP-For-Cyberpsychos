#pragma once

enum class BedType : unsigned char
{
	SINGLE,
	DOUBLE,
	TWIN,
	QUEEN,
	KING
};

enum class RoomType : unsigned char
{
	SINGLE,
	DOUBLE,
	SUITE
};

enum class RoomStatus : unsigned char
{
	VACANT,
	OCCUPIED
};

enum class PaymentStatus : unsigned char
{
	PAID,
	UNPAID
};