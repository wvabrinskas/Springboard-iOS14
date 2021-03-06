/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SGSpotlightIdentifiers.h>

@class SGCachedResult, NSString, NSDate, NSArray, CSPerson;

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers> {

	SGCachedResult* _isInhumanSenderCached;
	SGCachedResult* _isInhumanContentCached;
	SGCachedResult* _taggedCharacterRangesCached;
	SGCachedResult* _messageSubjectDetectedDataCached;
	SGCachedResult* _dataDetectorMatchesWithSignatureForContentCached;
	BOOL _isSent;
	BOOL _isStoredEncrypted;
	NSString* _subject;
	NSString* _textContent;
	NSString* _source;
	NSDate* _date;
	NSString* _bundleIdentifier;
	NSString* _uniqueIdentifier;
	NSString* _domainIdentifier;
	NSArray* _attachments;
	NSArray* _accountHandles;
	NSString* _accountType;

}

@property (nonatomic,copy) NSString * subject;                                    //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * textContent;                                //@synthesize textContent=_textContent - In the implementation block
@property (nonatomic,copy) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * domainIdentifier;                           //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * accountHandles;                              //@synthesize accountHandles=_accountHandles - In the implementation block
@property (assign,nonatomic) BOOL isSent;                                         //@synthesize isSent=_isSent - In the implementation block
@property (nonatomic,copy) NSString * accountType;                                //@synthesize accountType=_accountType - In the implementation block
@property (assign,nonatomic) BOOL isStoredEncrypted;                              //@synthesize isStoredEncrypted=_isStoredEncrypted - In the implementation block
@property (nonatomic,readonly) CSPerson * author; 
@property (nonatomic,readonly) NSArray * attachments;                             //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,readonly) BOOL isInhumanSender; 
@property (nonatomic,readonly) BOOL isInhumanContent; 
@property (nonatomic,readonly) NSArray * messageSubjectDetectedData; 
@property (nonatomic,readonly) NSArray * plainTextDetectedData; 
@property (nonatomic,readonly) NSArray * taggedCharacterRanges; 
@property (nonatomic,readonly) NSRange detectedDataSignatureRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)messageWithSearchableItem:(id)arg1 ;
+(id)fromDictionary:(id)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)asDictionary;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)init;
-(NSString *)domainIdentifier;
-(BOOL)isEqualToMessage:(id)arg1 ;
-(CSPerson *)author;
-(void)setAccountHandles:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)taggedCharacterRanges;
-(NSString *)bundleIdentifier;
-(void)setSource:(NSString *)arg1 ;
-(void)setIsSent:(BOOL)arg1 ;
-(NSArray *)accountHandles;
-(NSDate *)date;
-(NSString *)accountType;
-(NSString *)source;
-(NSString *)textContent;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setAccountType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextContent:(NSString *)arg1 ;
-(BOOL)isSent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSearchableItem:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSArray *)attachments;
-(id)spotlightBundleIdentifier;
-(id)spotlightDomainIdentifier;
-(id)initForBuilding;
-(BOOL)isInhumanContentNoncached;
-(id)dataDetectorMatchesWithSignature;
-(id)spotlightUniqueIdentifier;
-(id)spotlightReference;
-(NSArray *)plainTextDetectedData;
-(BOOL)isInhumanSender;
-(BOOL)isInhumanContent;
-(NSArray *)messageSubjectDetectedData;
-(NSRange)detectedDataSignatureRange;
-(BOOL)isStoredEncrypted;
-(void)setIsStoredEncrypted:(BOOL)arg1 ;
@end

