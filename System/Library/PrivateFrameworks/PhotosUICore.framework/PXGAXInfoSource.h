/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSIndexSet;


@protocol PXGAXInfoSource <NSObject>
@property (nonatomic,readonly) NSIndexSet * axSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axVisibleSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * axSelectedSpriteIndexes; 
@required
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2;
-(id)axContentInfoAtSpriteIndex:(unsigned)arg1;
-(id)axSpriteIndexesInRect:(CGRect)arg1;
-(NSIndexSet *)axVisibleSpriteIndexes;
-(NSIndexSet *)axSpriteIndexes;
-(NSIndexSet *)axSelectedSpriteIndexes;

@end

