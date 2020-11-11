/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFVersion.h>

@class NSString;

@interface HMFSoftwareVersion : HMFVersion {

	NSString* _buildVersion;

}

@property (nonatomic,readonly) BOOL hf_softwareUpdateWouldSupportHomePodPairing; 
@property (copy,readonly) NSString * buildVersion;                                            //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * shortVersionString; 
+(BOOL)supportsSecureCoding;
+(id)versionFromOperatingSystemVersion:(SCD_Struct_HM6)arg1 ;
-(BOOL)hf_softwareUpdateWouldSupportHomePodPairing;
-(id)versionString;
-(NSString *)shortVersionString;
-(id)localizedDescription;
-(SCD_Struct_HM6)operatingSystemVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)buildVersion;
-(long long)compare:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 buildVersion:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 updateVersion:(unsigned long long)arg3 ;
-(id)initWithVersionString:(id)arg1 ;
@end
