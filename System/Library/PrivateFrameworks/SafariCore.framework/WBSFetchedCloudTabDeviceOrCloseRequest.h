/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding> {

	NSString* _uuidString;
	NSDictionary* _deviceOrCloseRequestDictionary;

}

@property (nonatomic,copy,readonly) NSString * uuidString;                                      //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deviceOrCloseRequestDictionary;              //@synthesize deviceOrCloseRequestDictionary=_deviceOrCloseRequestDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUUIDString:(id)arg1 deviceOrCloseRequestDictionary:(id)arg2 ;
-(NSDictionary *)deviceOrCloseRequestDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuidString;
@end
