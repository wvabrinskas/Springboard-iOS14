/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {

	NSString* _serviceString;
	NSNumber* _priority;
	NSNumber* _weight;
	NSNumber* _port;
	NSString* _target;

}

@property (nonatomic,retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSNumber * port;                       //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * target;                     //@synthesize target=_target - In the implementation block
-(NSString *)target;
-(NSNumber *)port;
-(NSNumber *)weight;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(id)description;
-(void)setWeight:(NSNumber *)arg1 ;
-(NSNumber *)priority;
-(void)setPriority:(NSNumber *)arg1 ;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
@end

