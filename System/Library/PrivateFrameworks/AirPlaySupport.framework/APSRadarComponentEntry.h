/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface APSRadarComponentEntry : NSObject {

	NSString* componentName;
	NSString* componentVersion;
	NSString* componentID;

}

@property (nonatomic,readonly) NSString * componentName; 
@property (nonatomic,readonly) NSString * componentVersion; 
@property (nonatomic,readonly) NSString * componentID; 
+(id)componentEntryWithName:(id)arg1 componentVersion:(id)arg2 componentID:(id)arg3 ;
-(NSString *)componentVersion;
-(NSString *)componentID;
-(NSString *)componentName;
@end
