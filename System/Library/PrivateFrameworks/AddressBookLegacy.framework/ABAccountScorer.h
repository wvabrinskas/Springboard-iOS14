/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ACAccountStore;

@interface ABAccountScorer : NSObject {

	int _sourceID;
	int _defaultSourceID;
	double _score;
	NSString* _accountType;
	void* _addressBook;
	ACAccountStore* _accountStore;
	void* _account;

}

@property (assign,nonatomic) void* addressBook;                                          //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) void* account;                                              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) int defaultSourceID;                                        //@synthesize defaultSourceID=_defaultSourceID - In the implementation block
@property (assign,nonatomic) double score;                                               //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSString * accountType;                                     //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeDescription; 
@property (nonatomic,readonly) NSString * accountDisambiguationDescription; 
@property (assign,nonatomic) int sourceID;                                               //@synthesize sourceID=_sourceID - In the implementation block
-(void)setAddressBook:(void*)arg1 ;
-(void)setScore:(double)arg1 ;
-(void*)account;
-(void)setAccount:(void*)arg1 ;
-(double)score;
-(NSString *)accountType;
-(int)sourceID;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)setAccountType:(NSString *)arg1 ;
-(id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 account:(void*)arg3 defaultSourceID:(int)arg4 ;
-(void)calculateScore;
-(NSString *)accountDisambiguationDescription;
-(int)_findBestSourceID;
-(void)setDefaultSourceID:(int)arg1 ;
-(NSString *)accountTypeDescription;
-(int)defaultSourceID;
-(void)setSourceID:(int)arg1 ;
-(void*)addressBook;
-(void)dealloc;
@end

