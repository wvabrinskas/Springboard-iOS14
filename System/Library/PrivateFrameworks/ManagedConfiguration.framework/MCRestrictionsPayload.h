/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload {

	NSMutableDictionary* _restrictions;
	NSString* _iCloudPassword;

}

@property (nonatomic,retain) NSString * iCloudPassword;              //@synthesize iCloudPassword=_iCloudPassword - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(id)restrictions;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)installationWarnings;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSString *)iCloudPassword;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(id)_restrictedFeatureStrings;
-(id)_enforcedFeatureStrings;
-(id)_unionStrings;
-(id)_defaultValueRestrictions;
-(id)_intersectionStrings;
-(id)localizedRestrictionStrings;
-(void)setICloudPassword:(NSString *)arg1 ;
-(void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3 ;
@end

