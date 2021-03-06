/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NSLocaleLanguage : NSObject {

	NSString* _twoCharacterCode;
	NSString* _threeCharacterCode;

}

@property (copy) NSString * twoCharacterCode;                //@synthesize twoCharacterCode=_twoCharacterCode - In the implementation block
@property (copy) NSString * threeCharacterCode;              //@synthesize threeCharacterCode=_threeCharacterCode - In the implementation block
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTwoCharacterCode:(NSString *)arg1 ;
-(void)setThreeCharacterCode:(NSString *)arg1 ;
-(NSString *)twoCharacterCode;
-(NSString *)threeCharacterCode;
@end

