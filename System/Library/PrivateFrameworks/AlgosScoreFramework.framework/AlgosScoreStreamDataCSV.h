/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AlgosScoreFramework/AlgosScoreDataCSV.h>

@class NSDictionary;

@interface AlgosScoreStreamDataCSV : AlgosScoreDataCSV {

	BOOL _isMusic;
	NSDictionary* _methods;

}

@property (nonatomic,retain) NSDictionary * methods;              //@synthesize methods=_methods - In the implementation block
@property (assign,nonatomic) BOOL isMusic;                        //@synthesize isMusic=_isMusic - In the implementation block
+(id)streamDataCSV:(BOOL)arg1 ;
-(NSDictionary *)methods;
-(int)transformer;
-(BOOL)isMusic;
-(id)initIsMusic:(BOOL)arg1 ;
-(void)setIsMusic:(BOOL)arg1 ;
-(id)setUpMethods;
-(void)setMethods:(NSDictionary *)arg1 ;
-(BOOL)matchesMethod:(id)arg1 code:(long long)arg2 ;
-(BOOL)validMethod:(long long)arg1 ;
@end
