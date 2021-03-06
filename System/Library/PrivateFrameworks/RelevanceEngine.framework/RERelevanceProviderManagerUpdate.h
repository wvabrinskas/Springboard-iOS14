/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying> {

	RERelevanceProvider* _provider;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) RERelevanceProvider * provider; 
@property (nonatomic,readonly) BOOL allProviders; 
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
+(id)immediateUpdateForProvider:(id)arg1 ;
+(id)immediateUpdateForAllProviders;
+(id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2 ;
+(id)scheduledUpdateForAllProvidersAtDate:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(BOOL)allProviders;
-(RERelevanceProvider *)provider;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

