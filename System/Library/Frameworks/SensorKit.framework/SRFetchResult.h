/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary;

@interface SRFetchResult : NSObject <NSCopying> {

	double _timestamp;
	NSData* _sampleData;
	NSDictionary* _metadata;
	Class _sampleClass;

}

@property (retain) NSData * sampleData;                  //@synthesize sampleData=_sampleData - In the implementation block
@property (retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (retain) Class sampleClass;                    //@synthesize sampleClass=_sampleClass - In the implementation block
@property (copy,readonly) id sample; 
@property (readonly) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
+(void)initialize;
+(id)new;
-(id)init;
-(id)sample;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setSampleClass:(Class)arg1 ;
-(Class)sampleClass;
-(id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 sampleClass:(Class)arg4 ;
-(void)setSampleData:(NSData *)arg1 ;
-(NSData *)sampleData;
@end

