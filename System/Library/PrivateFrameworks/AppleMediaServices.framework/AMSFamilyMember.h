/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSNumber, NSDictionary;

@interface AMSFamilyMember : NSObject {

	BOOL _askToBuyEnabled;
	BOOL _currentSignedInUser;
	BOOL _sharingPurchases;
	NSString* _firstName;
	NSNumber* _iCloudDSID;
	NSString* _iCloudUsername;
	NSNumber* _iTunesDSID;
	NSString* _iTunesUsername;
	NSString* _lastName;

}

@property (assign,getter=isCurrentSignedInUser,nonatomic) BOOL currentSignedInUser;              //@synthesize currentSignedInUser=_currentSignedInUser - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isAskToBuyEnabled,nonatomic,readonly) BOOL askToBuyEnabled;                    //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                             //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSNumber * iCloudDSID;                                            //@synthesize iCloudDSID=_iCloudDSID - In the implementation block
@property (nonatomic,readonly) NSString * iCloudUsername;                                        //@synthesize iCloudUsername=_iCloudUsername - In the implementation block
@property (nonatomic,readonly) NSNumber * iTunesDSID;                                            //@synthesize iTunesDSID=_iTunesDSID - In the implementation block
@property (nonatomic,readonly) NSString * iTunesUsername;                                        //@synthesize iTunesUsername=_iTunesUsername - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                              //@synthesize lastName=_lastName - In the implementation block
@property (getter=isSharingPurchases,nonatomic,readonly) BOOL sharingPurchases;                  //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
-(NSString *)firstName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSNumber *)iCloudDSID;
-(NSString *)lastName;
-(NSDictionary *)dictionaryRepresentation;
-(NSNumber *)iTunesDSID;
-(id)description;
-(void)setCurrentSignedInUser:(BOOL)arg1 ;
-(BOOL)isCurrentSignedInUser;
-(NSString *)iCloudUsername;
-(BOOL)isAskToBuyEnabled;
-(BOOL)isSharingPurchases;
-(NSString *)iTunesUsername;
@end
