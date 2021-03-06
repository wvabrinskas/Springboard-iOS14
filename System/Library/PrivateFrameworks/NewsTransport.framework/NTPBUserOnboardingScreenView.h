/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserOnboardingScreenView : PBCodable <NSCopying> {

	int _channelPickerPresentationReason;
	int _countOfNotificationsSelected;
	int _onboardingScreenType;
	int _previouslyCompletedOnboardingOsVersion;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _userAction;
	NSString* _userActivityType;
	BOOL _fromPersonalizeNews;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasOnboardingScreenType; 
@property (assign,nonatomic) int onboardingScreenType;                                    //@synthesize onboardingScreenType=_onboardingScreenType - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                       //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                     //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                                 //@synthesize userActivityType=_userActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                              //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfNotificationsSelected; 
@property (assign,nonatomic) int countOfNotificationsSelected;                            //@synthesize countOfNotificationsSelected=_countOfNotificationsSelected - In the implementation block
@property (assign,nonatomic) BOOL hasPreviouslyCompletedOnboardingOsVersion; 
@property (assign,nonatomic) int previouslyCompletedOnboardingOsVersion;                  //@synthesize previouslyCompletedOnboardingOsVersion=_previouslyCompletedOnboardingOsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasFromPersonalizeNews; 
@property (assign,nonatomic) BOOL fromPersonalizeNews;                                    //@synthesize fromPersonalizeNews=_fromPersonalizeNews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelPickerPresentationReason; 
@property (assign,nonatomic) int channelPickerPresentationReason;                         //@synthesize channelPickerPresentationReason=_channelPickerPresentationReason - In the implementation block
-(void)setUserActivityType:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(NSString *)referringUrl;
-(BOOL)hasUserActivityType;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(int)userAction;
-(int)channelPickerPresentationReason;
-(BOOL)hasUserAction;
-(BOOL)hasReferringSourceApplication;
-(unsigned long long)hash;
-(void)setHasPreviouslyCompletedOnboardingOsVersion:(BOOL)arg1 ;
-(BOOL)hasFromPersonalizeNews;
-(NSString *)userActivityType;
-(BOOL)hasReferringUrl;
-(NSString *)referringSourceApplication;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)fromPersonalizeNews;
-(BOOL)hasChannelPickerPresentationReason;
-(id)channelPickerPresentationReasonAsString:(int)arg1 ;
-(id)description;
-(void)setOnboardingScreenType:(int)arg1 ;
-(void)setPreviouslyCompletedOnboardingOsVersion:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(void)setHasOnboardingScreenType:(BOOL)arg1 ;
-(void)setCountOfNotificationsSelected:(int)arg1 ;
-(int)countOfNotificationsSelected;
-(void)setFromPersonalizeNews:(BOOL)arg1 ;
-(BOOL)hasOnboardingScreenType;
-(int)onboardingScreenType;
-(void)setHasFromPersonalizeNews:(BOOL)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(BOOL)hasCountOfNotificationsSelected;
-(void)writeTo:(id)arg1 ;
-(int)StringAsChannelPickerPresentationReason:(id)arg1 ;
-(BOOL)hasPreviouslyCompletedOnboardingOsVersion;
-(void)setHasChannelPickerPresentationReason:(BOOL)arg1 ;
-(void)setChannelPickerPresentationReason:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasCountOfNotificationsSelected:(BOOL)arg1 ;
-(int)previouslyCompletedOnboardingOsVersion;
@end

