/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBChainableModifier, SBModifierCacheCoordinator;

@interface SBChainableModifierMethodCache : NSObject <NSCopying> {

	SBChainableModifier* _modifier;
	SEL* _selectors;
	long long _selectorCount;
	/*function pointer*/void** _imps;
	unsigned long long _genCount;
	SBModifierCacheCoordinator* _cacheCoordinator;
	SBModifierCacheDispatchData* _dispatchCache;
	/*function pointer*/void* _nextFunc;

}

@property (assign,nonatomic) SBChainableModifier * modifier;                             //@synthesize modifier=_modifier - In the implementation block
@property (nonatomic,retain) SBModifierCacheCoordinator * cacheCoordinator;              //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL hasNonTrampolineIMPs; 
-(void)setCacheCoordinator:(SBModifierCacheCoordinator *)arg1 ;
-(SBModifierCacheCoordinator *)cacheCoordinator;
-(SBChainableModifier *)modifier;
-(id)initWithIMPs:(/*function pointer*/void**)arg1 selectorList:(id)arg2 subsequentMethodCacheFunc:(/*function pointer*/void*)arg3 ;
-(BOOL)hasNonTrampolineIMPs;
-(void)setModifier:(SBChainableModifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
