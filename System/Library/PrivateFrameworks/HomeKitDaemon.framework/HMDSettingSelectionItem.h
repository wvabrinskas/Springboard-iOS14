/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _title;

}

@property (copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTitle:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
