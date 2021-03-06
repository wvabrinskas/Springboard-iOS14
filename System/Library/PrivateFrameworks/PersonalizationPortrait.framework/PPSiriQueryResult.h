/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface PPSiriQueryResult : NSObject <NSCopying> {

	NSString* _qid;
	NSString* _domain;
	NSNumber* _confidence;

}

@property (nonatomic,readonly) NSString * qid;                     //@synthesize qid=_qid - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(NSString *)qid;
-(id)init;
-(unsigned long long)hash;
-(id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3 ;
-(BOOL)isEqualToSiriQueryResult:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)confidence;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

