/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNVCardPerson.h>

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents;

@interface CNVCardPerson : NSObject <CNVCardPerson> {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _title;
	NSString* _suffix;
	NSString* _nickname;
	NSString* _maidenName;
	NSString* _phoneticFirstName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticLastName;
	NSString* _pronunciationFirstName;
	NSString* _pronunciationLastName;
	NSString* _organization;
	NSString* _phoneticOrganization;
	NSString* _department;
	NSString* _jobTitle;
	BOOL _isMe;
	BOOL _isCompany;
	int _nameOrder;
	NSArray* _emailAddresses;
	NSArray* _phoneNumbers;
	NSArray* _postalAddresses;
	NSArray* _socialProfiles;
	NSArray* _instantMessagingAddresses;
	NSArray* _urls;
	NSArray* _calendarURIs;
	NSDictionary* _activityAlerts;
	NSArray* _imageReferences;
	NSDictionary* _imageCropRects;
	NSDictionary* _largeImageCropRects;
	NSData* _largeImageData;
	NSData* _imageData;
	NSString* _imageType;
	NSData* _imageHash;
	NSDateComponents* _birthdayComponents;
	NSDateComponents* _alternateBirthdayComponents;
	NSArray* _otherDateComponents;
	NSArray* _relatedNames;
	NSString* _note;
	NSArray* _namesOfParentGroups;
	NSString* _cardDAVUID;
	NSString* _uid;
	NSString* _phonemeData;
	int _downtimeWhitelistAuthorization;
	NSArray* _unknownProperties;
	NSString* _preferredLikenessSource;
	NSString* _preferredApplePersonaIdentifier;

}

@property (retain) NSString * firstName;                                        //@synthesize firstName=_firstName - In the implementation block
@property (retain) NSString * lastName;                                         //@synthesize lastName=_lastName - In the implementation block
@property (retain) NSString * middleName;                                       //@synthesize middleName=_middleName - In the implementation block
@property (retain) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (retain) NSString * suffix;                                           //@synthesize suffix=_suffix - In the implementation block
@property (retain) NSString * nickname;                                         //@synthesize nickname=_nickname - In the implementation block
@property (retain) NSString * maidenName;                                       //@synthesize maidenName=_maidenName - In the implementation block
@property (retain) NSString * phoneticFirstName;                                //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (retain) NSString * phoneticMiddleName;                               //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (retain) NSString * phoneticLastName;                                 //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (retain) NSString * pronunciationFirstName;                           //@synthesize pronunciationFirstName=_pronunciationFirstName - In the implementation block
@property (retain) NSString * pronunciationLastName;                            //@synthesize pronunciationLastName=_pronunciationLastName - In the implementation block
@property (retain) NSString * organization;                                     //@synthesize organization=_organization - In the implementation block
@property (retain) NSString * phoneticOrganization;                             //@synthesize phoneticOrganization=_phoneticOrganization - In the implementation block
@property (retain) NSString * department;                                       //@synthesize department=_department - In the implementation block
@property (retain) NSString * jobTitle;                                         //@synthesize jobTitle=_jobTitle - In the implementation block
@property (assign) BOOL isMe;                                                   //@synthesize isMe=_isMe - In the implementation block
@property (assign) BOOL isCompany;                                              //@synthesize isCompany=_isCompany - In the implementation block
@property (assign) int nameOrder;                                               //@synthesize nameOrder=_nameOrder - In the implementation block
@property (retain) NSArray * emailAddresses;                                    //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (retain) NSArray * phoneNumbers;                                      //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (retain) NSArray * postalAddresses;                                   //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (retain) NSArray * socialProfiles;                                    //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (retain) NSArray * instantMessagingAddresses;                         //@synthesize instantMessagingAddresses=_instantMessagingAddresses - In the implementation block
@property (retain) NSArray * urls;                                              //@synthesize urls=_urls - In the implementation block
@property (retain) NSArray * calendarURIs;                                      //@synthesize calendarURIs=_calendarURIs - In the implementation block
@property (retain) NSDictionary * activityAlerts;                               //@synthesize activityAlerts=_activityAlerts - In the implementation block
@property (retain) NSArray * imageReferences;                                   //@synthesize imageReferences=_imageReferences - In the implementation block
@property (retain) NSDictionary * imageCropRects;                               //@synthesize imageCropRects=_imageCropRects - In the implementation block
@property (retain) NSDictionary * largeImageCropRects;                          //@synthesize largeImageCropRects=_largeImageCropRects - In the implementation block
@property (retain) NSData * largeImageData;                                     //@synthesize largeImageData=_largeImageData - In the implementation block
@property (retain) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
@property (retain) NSString * imageType;                                        //@synthesize imageType=_imageType - In the implementation block
@property (retain) NSData * imageHash;                                          //@synthesize imageHash=_imageHash - In the implementation block
@property (retain) NSDateComponents * birthdayComponents;                       //@synthesize birthdayComponents=_birthdayComponents - In the implementation block
@property (retain) NSDateComponents * alternateBirthdayComponents;              //@synthesize alternateBirthdayComponents=_alternateBirthdayComponents - In the implementation block
@property (retain) NSArray * otherDateComponents;                               //@synthesize otherDateComponents=_otherDateComponents - In the implementation block
@property (retain) NSArray * relatedNames;                                      //@synthesize relatedNames=_relatedNames - In the implementation block
@property (retain) NSString * note;                                             //@synthesize note=_note - In the implementation block
@property (retain) NSString * phonemeData;                                      //@synthesize phonemeData=_phonemeData - In the implementation block
@property (retain) NSArray * namesOfParentGroups;                               //@synthesize namesOfParentGroups=_namesOfParentGroups - In the implementation block
@property (retain) NSString * cardDAVUID;                                       //@synthesize cardDAVUID=_cardDAVUID - In the implementation block
@property (retain) NSString * uid;                                              //@synthesize uid=_uid - In the implementation block
@property (retain) NSString * preferredLikenessSource;                          //@synthesize preferredLikenessSource=_preferredLikenessSource - In the implementation block
@property (retain) NSString * preferredApplePersonaIdentifier;                  //@synthesize preferredApplePersonaIdentifier=_preferredApplePersonaIdentifier - In the implementation block
@property (assign) int downtimeWhitelistAuthorization;                          //@synthesize downtimeWhitelistAuthorization=_downtimeWhitelistAuthorization - In the implementation block
@property (retain) NSArray * unknownProperties;                                 //@synthesize unknownProperties=_unknownProperties - In the implementation block
@property (readonly) NSString * companyName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)firstName;
-(BOOL)isMe;
-(NSArray *)urls;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)suffix;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)phoneticFirstName;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setPreferredLikenessSource:(NSString *)arg1 ;
-(void)setImageType:(NSString *)arg1 ;
-(NSString *)preferredLikenessSource;
-(void)setUnknownProperties:(NSArray *)arg1 ;
-(NSString *)lastName;
-(void)setNameOrder:(int)arg1 ;
-(NSString *)uid;
-(void)setNote:(NSString *)arg1 ;
-(NSString *)phonemeData;
-(NSString *)phoneticLastName;
-(NSArray *)calendarURIs;
-(BOOL)isCompany;
-(NSString *)preferredApplePersonaIdentifier;
-(void)setPreferredApplePersonaIdentifier:(NSString *)arg1 ;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(void)setPhonemeData:(NSString *)arg1 ;
-(NSString *)cardDAVUID;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setUrls:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(NSData *)imageHash;
-(NSString *)maidenName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(NSString *)department;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setActivityAlerts:(NSDictionary *)arg1 ;
-(NSString *)phoneticMiddleName;
-(void)setImageHash:(NSData *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)note;
-(NSString *)companyName;
-(NSString *)jobTitle;
-(void)setOrganization:(NSString *)arg1 ;
-(NSString *)organization;
-(NSDictionary *)activityAlerts;
-(NSString *)title;
-(id)largeImageHashOfType:(id)arg1 ;
-(NSString *)pronunciationFirstName;
-(NSString *)pronunciationLastName;
-(NSArray *)imageReferences;
-(NSString *)phoneticOrganization;
-(NSArray *)instantMessagingAddresses;
-(NSDictionary *)imageCropRects;
-(NSDictionary *)largeImageCropRects;
-(NSData *)largeImageData;
-(NSDateComponents *)birthdayComponents;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)namesOfParentGroups;
-(int)downtimeWhitelistAuthorization;
-(NSArray *)unknownProperties;
-(NSString *)nickname;
-(NSString *)imageType;
-(NSData *)imageData;
-(NSArray *)socialProfiles;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDepartment:(NSString *)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setMaidenName:(NSString *)arg1 ;
-(int)nameOrder;
-(NSString *)middleName;
-(void)setNickname:(NSString *)arg1 ;
-(NSArray *)relatedNames;
-(NSArray *)postalAddresses;
-(NSArray *)phoneNumbers;
-(void)setPronunciationFirstName:(NSString *)arg1 ;
-(void)setPronunciationLastName:(NSString *)arg1 ;
-(void)setPhoneticOrganization:(NSString *)arg1 ;
-(void)setIsCompany:(BOOL)arg1 ;
-(void)setInstantMessagingAddresses:(NSArray *)arg1 ;
-(void)setImageReferences:(NSArray *)arg1 ;
-(void)setImageCropRects:(NSDictionary *)arg1 ;
-(void)setLargeImageCropRects:(NSDictionary *)arg1 ;
-(void)setLargeImageData:(NSData *)arg1 ;
-(void)setBirthdayComponents:(NSDateComponents *)arg1 ;
-(void)setAlternateBirthdayComponents:(NSDateComponents *)arg1 ;
-(void)setOtherDateComponents:(NSArray *)arg1 ;
-(void)setNamesOfParentGroups:(NSArray *)arg1 ;
-(void)setDowntimeWhitelistAuthorization:(int)arg1 ;
@end

