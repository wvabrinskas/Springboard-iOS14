/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface SGContactDetailSummary : NSObject {

	NSArray* _phones;
	NSString* _email;
	NSArray* _imAddresses;

}

@property (nonatomic,copy) NSArray * phones;                   //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSString * email;                   //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSArray * imAddresses;              //@synthesize imAddresses=_imAddresses - In the implementation block
-(void)setEmail:(NSString *)arg1 ;
-(NSArray *)phones;
-(NSString *)email;
-(void)setPhones:(NSArray *)arg1 ;
-(NSArray *)imAddresses;
-(void)setImAddresses:(NSArray *)arg1 ;
@end

