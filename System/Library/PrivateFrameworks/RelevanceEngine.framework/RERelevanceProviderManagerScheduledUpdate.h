/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProviderManagerUpdate.h>

@class NSDate;

@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate {

	NSDate* _updateDate;

}

@property (nonatomic,readonly) NSDate * updateDate;              //@synthesize updateDate=_updateDate - In the implementation block
-(unsigned long long)hash;
-(NSDate *)updateDate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProvider:(id)arg1 updateDate:(id)arg2 ;
@end

