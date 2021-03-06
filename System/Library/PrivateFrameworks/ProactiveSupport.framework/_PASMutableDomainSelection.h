/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <ProactiveSupport/_PASDomainSelection.h>

@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {

	NSMutableDictionary* _domains;
	unsigned long long _count;
	BOOL _taintedByDeepDomain;

}
-(BOOL)addDomain:(id)arg1 ;
-(void)_decrementCountAndMaybePruneItems:(id)arg1 ;
-(id)init;
-(BOOL)_addDomainsFrom:(id)arg1 ;
-(BOOL)addDomainsFromArray:(id)arg1 ;
-(BOOL)addDomainsFromSelection:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(BOOL)addDomainsFromSet:(id)arg1 ;
-(id)allDomains;
-(BOOL)containsDomain:(id)arg1 ;
-(BOOL)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(BOOL)arg3 ;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

