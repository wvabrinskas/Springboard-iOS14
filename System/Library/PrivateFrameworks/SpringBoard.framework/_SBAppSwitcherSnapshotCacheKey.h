/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBAppLayout, SBDisplayItem;

@interface _SBAppSwitcherSnapshotCacheKey : NSObject <NSCopying> {

	unsigned long long _hash;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;                  //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) SBDisplayItem * displayItem;              //@synthesize displayItem=_displayItem - In the implementation block
-(SBAppLayout *)appLayout;
-(unsigned long long)hash;
-(id)initWithDisplayItem:(id)arg1 inAppLayout:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(SBDisplayItem *)displayItem;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

