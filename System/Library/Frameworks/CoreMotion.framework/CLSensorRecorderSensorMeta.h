/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding> {

	BOOL _movement;
	unsigned _offset;
	unsigned _dataSize;
	int _dataType;
	unsigned long long _identifier;
	double _startTime;
	unsigned long long _timestamp;
	unsigned long long _dataIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long dataIdentifier;              //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign) unsigned offset;                                //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned dataSize;                              //@synthesize dataSize=_dataSize - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
@property (assign) BOOL movement;                                  //@synthesize movement=_movement - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(void)setMovement:(BOOL)arg1 ;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned)arg1 ;
-(BOOL)movement;
-(double)startTime;
-(unsigned)offset;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(unsigned)dataSize;
-(void)setStartTime:(double)arg1 ;
-(void)setDataType:(int)arg1 ;
-(id)description;
-(void)setOffset:(unsigned)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDataType:(int)arg1 ;
-(unsigned long long)dataIdentifier;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
@end
