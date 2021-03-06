/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGridInlinePlaybackRecord.h>

@interface _PXDetailsPlaybackRecord : PXGridInlinePlaybackRecord {

	PXTileIdentifier _tileIdentifier;

}

@property (nonatomic,readonly) id<_PXDetailsAutoplayTile> geometryReference; 
@property (assign,nonatomic) PXTileIdentifier tileIdentifier;                             //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
-(PXTileIdentifier)tileIdentifier;
-(void)setDesiredPlayState:(long long)arg1 ;
-(long long)desiredPlayState;
-(void)setTileIdentifier:(PXTileIdentifier)arg1 ;
@end

