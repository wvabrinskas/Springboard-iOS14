/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterServices/ControlCenterServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSURL;

@interface CCSModuleMetadata : NSObject <NSCopying> {

	NSString* _moduleIdentifier;
	NSSet* _supportedDeviceFamilies;
	NSSet* _requiredDeviceCapabilities;
	NSString* _associatedBundleIdentifier;
	NSString* _associatedBundleMinimumVersion;
	unsigned long long _visibilityPreference;
	NSURL* _moduleBundleURL;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;                            //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedDeviceFamilies;                        //@synthesize supportedDeviceFamilies=_supportedDeviceFamilies - In the implementation block
@property (nonatomic,copy,readonly) NSSet * requiredDeviceCapabilities;                     //@synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedBundleIdentifier;                  //@synthesize associatedBundleIdentifier=_associatedBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedBundleMinimumVersion;              //@synthesize associatedBundleMinimumVersion=_associatedBundleMinimumVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityPreference;                     //@synthesize visibilityPreference=_visibilityPreference - In the implementation block
@property (nonatomic,copy,readonly) NSURL * moduleBundleURL;                                //@synthesize moduleBundleURL=_moduleBundleURL - In the implementation block
+(id)_supportedDeviceFamiliesForBundleInfoDictionary:(id)arg1 ;
+(id)_requiredCapabilitiesForInfoDictionary:(id)arg1 ;
+(id)metadataForBundleAtURL:(id)arg1 ;
-(NSString *)associatedBundleMinimumVersion;
-(NSString *)associatedBundleIdentifier;
-(id)_initWithModuleIdentifier:(id)arg1 supportedDeviceFamilies:(id)arg2 requiredDeviceCapabilities:(id)arg3 associatedBundleIdentifier:(id)arg4 associatedBundleMinimumVersion:(id)arg5 visibilityPreference:(unsigned long long)arg6 moduleBundleURL:(id)arg7 ;
-(unsigned long long)hash;
-(NSURL *)moduleBundleURL;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)moduleIdentifier;
-(NSSet *)requiredDeviceCapabilities;
-(NSSet *)supportedDeviceFamilies;
-(unsigned long long)visibilityPreference;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
