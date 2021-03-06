/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying> {

	BOOL _useUniqueLeafs;
	NSMutableDictionary* __objectsByTileIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _objectsByTileIdentifier;              //@synthesize _objectsByTileIdentifier=__objectsByTileIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL useUniqueLeafs;                                         //@synthesize useUniqueLeafs=_useUniqueLeafs - In the implementation block
-(BOOL)containsObject:(id)arg1 withTileIdentifier:(id)arg2 ;
-(void)removeAllObjects;
-(id)init;
-(BOOL)useUniqueLeafs;
-(id)initWithTileTree:(id)arg1 ;
-(void)removeObject:(id)arg1 withTileIdentifier:(id)arg2 ;
-(id)description;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addObject:(id)arg1 withTileIdentifier:(id)arg2 ;
-(id)objectWithTileIdentifier:(id)arg1 ;
-(id)initUsingUniqueLeafs:(BOOL)arg1 ;
-(void)removeObjectWithTileIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateObjectsWithTileIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_objectsByTileIdentifier;
@end

