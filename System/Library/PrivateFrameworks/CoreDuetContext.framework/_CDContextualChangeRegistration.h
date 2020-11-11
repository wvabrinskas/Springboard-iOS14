/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _mustWake;
	BOOL _isDeserialized;
	unsigned _qualityOfService;
	NSString* _identifier;
	_CDContextualPredicate* _predicate;
	_CDContextualPredicate* _dismissalPolicy;
	/*^block*/id _callback;
	unsigned long long _deviceSet;
	unsigned long long _deviceTypes;
	NSString* _clientIdentifier;
	NSString* _locationManagerEffectiveBundleID;
	NSString* _locationManagerEffectiveBundlePath;
	/*^block*/id _informativeCallback;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) _CDContextualPredicate * predicate;                       //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) _CDContextualPredicate * dismissalPolicy;                 //@synthesize dismissalPolicy=_dismissalPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long deviceSet;                             //@synthesize deviceSet=_deviceSet - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL mustWake;                                            //@synthesize mustWake=_mustWake - In the implementation block
@property (assign,nonatomic) BOOL isDeserialized;                                      //@synthesize isDeserialized=_isDeserialized - In the implementation block
@property (nonatomic,copy) NSString * locationManagerEffectiveBundleID;                //@synthesize locationManagerEffectiveBundleID=_locationManagerEffectiveBundleID - In the implementation block
@property (nonatomic,copy) NSString * locationManagerEffectiveBundlePath;              //@synthesize locationManagerEffectiveBundlePath=_locationManagerEffectiveBundlePath - In the implementation block
@property (copy) id informativeCallback;                                               //@synthesize informativeCallback=_informativeCallback - In the implementation block
@property (copy,readonly) id callback;                                                 //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceTypes;                         //@synthesize deviceTypes=_deviceTypes - In the implementation block
@property (nonatomic,readonly) unsigned qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 callback:(/*^block*/id)arg7 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 qualityOfService:(unsigned)arg6 callback:(/*^block*/id)arg7 ;
+(id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 qualityOfService:(unsigned)arg7 callback:(/*^block*/id)arg8 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(void)setMustWake:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 qualityOfService:(unsigned)arg8 informativeCallback:(/*^block*/id)arg9 ;
-(id)callback;
-(id)init;
-(unsigned long long)deviceSet;
-(unsigned long long)hash;
-(unsigned)qualityOfService;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDismissalPolicy:(_CDContextualPredicate *)arg1 ;
-(NSString *)identifier;
-(_CDContextualPredicate *)predicate;
-(void)setPredicate:(_CDContextualPredicate *)arg1 ;
-(id)description;
-(void)setIsDeserialized:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocationManagerEffectiveBundlePath:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 callback:(/*^block*/id)arg8 ;
-(NSString *)locationManagerEffectiveBundlePath;
-(BOOL)isMultiDeviceRegistration;
-(id)informativeCallback;
-(void)setInformativeCallback:(id)arg1 ;
-(_CDContextualPredicate *)dismissalPolicy;
-(unsigned long long)deviceTypes;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceSet:(unsigned long long)arg1 ;
-(BOOL)mustWake;
-(BOOL)isDeserialized;
-(void)setLocationManagerEffectiveBundleID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)locationManagerEffectiveBundleID;
@end
