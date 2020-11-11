/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>
+(id)VPNPluginProxyForIdentifier:(id)arg1 ;
+(id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithBundleIdentifier:(id)arg1 withContext:(LSContext*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
