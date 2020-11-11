/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface WFPEMEncoding : NSObject {

	NSString* _type;
	NSData* _data;

}

@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * data;                //@synthesize data=_data - In the implementation block
+(id)decodePEM:(id)arg1 error:(id*)arg2 ;
-(void)setData:(NSData *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 data:(id)arg2 ;
-(NSData *)data;
-(NSString *)type;
-(id)encodedPEM;
@end
