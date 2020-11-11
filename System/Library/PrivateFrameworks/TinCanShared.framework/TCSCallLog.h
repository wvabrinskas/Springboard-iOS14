/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TinCanShared/TinCanShared-Structs.h>
@class NSMutableDictionary, NSMutableOrderedSet;

@interface TCSCallLog : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _calls;
	NSMutableOrderedSet* _identifiers;

}

@property (nonatomic,retain) NSMutableDictionary * calls;                    //@synthesize calls=_calls - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(NSMutableDictionary *)calls;
-(NSMutableOrderedSet *)identifiers;
-(id)init;
-(void)setCalls:(NSMutableDictionary *)arg1 ;
-(void)setIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(void)_trimCache;
-(void)addCall:(id)arg1 ;
@end
