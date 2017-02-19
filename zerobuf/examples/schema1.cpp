// Generated by zerobufCxx.py

#include "schema1.h"

#include <zerobuf/NonMovingAllocator.h>
#include <zerobuf/NonMovingSubAllocator.h>
#include <zerobuf/StaticSubAllocator.h>
#include <zerobuf/json.h>


int32_t KeyValue::getIntvalue() const
{
    return getAllocator().template getItem< int32_t >( 4 );
}

void KeyValue::setIntvalue( int32_t value )
{
    getAllocator().template getItem< int32_t >( 4 ) = value;
    notifyChanged();
}

double KeyValue::getDoublevalue() const
{
    return getAllocator().template getItem< double >( 8 );
}

void KeyValue::setDoublevalue( double value )
{
    getAllocator().template getItem< double >( 8 ) = value;
    notifyChanged();
}

KeyValue::KeyValue()
    : KeyValue( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 16, 0 )))
{}

KeyValue::KeyValue( const int32_t& intvalueValue, const double& doublevalueValue )
    : KeyValue( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 16, 0 )))
{
    setIntvalue( intvalueValue );
    setDoublevalue( doublevalueValue );
}

KeyValue::KeyValue( const KeyValue& rhs )
    : KeyValue( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 16, 0 )))
{
    *this = rhs;
}

KeyValue::KeyValue( KeyValue&& rhs ) noexcept
    : ::zerobuf::Zerobuf( std::move( rhs ))
{
}

KeyValue::KeyValue( const ::zerobuf::Zerobuf& rhs )
    : KeyValue( ::zerobuf::AllocatorPtr( new ::zerobuf::NonMovingAllocator( 16, 0 )))
{
    ::zerobuf::Zerobuf::operator = ( rhs );
}

KeyValue::KeyValue( ::zerobuf::AllocatorPtr allocator )
    : ::zerobuf::Zerobuf( std::move( allocator ))
{
}

KeyValue::~KeyValue()
    {}

KeyValue& KeyValue::operator = ( KeyValue&& rhs )
{
    ::zerobuf::Zerobuf::operator = ( std::move( rhs ));
    return *this;
}

std::string KeyValue::getSchema() const
{
    return ZEROBUF_SCHEMA();
}

std::string KeyValue::ZEROBUF_SCHEMA()
{
    return R"({
    "$schema": "http://json-schema.org/schema#",
    "title": "KeyValue",
    "description": "Class KeyValue of namespace []",
    "type": "object",
    "additionalProperties": false,
    "properties": {
        "intvalue": {
            "type": "integer"
        },
        "doublevalue": {
            "type": "number"
        }
    }
})";
}

void KeyValue::_parseJSON( const Json::Value& json )
{
    if( ::zerobuf::hasJSONField( json, "intvalue" ))
        setIntvalue( int32_t( ::zerobuf::fromJSON< int32_t >( ::zerobuf::getJSONField( json, "intvalue" ))));
    if( ::zerobuf::hasJSONField( json, "doublevalue" ))
        setDoublevalue( double( ::zerobuf::fromJSON< double >( ::zerobuf::getJSONField( json, "doublevalue" ))));
}

void KeyValue::_createJSON( Json::Value& json ) const
{
    ::zerobuf::toJSON( int32_t( getIntvalue( )), ::zerobuf::getJSONField( json, "intvalue" ));
    ::zerobuf::toJSON( double( getDoublevalue( )), ::zerobuf::getJSONField( json, "doublevalue" ));
}

namespace zerobuf
{

}

