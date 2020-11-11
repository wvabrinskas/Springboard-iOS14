/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUAlbumGadget.h>

@class PXPeopleAlbumProvider;

@interface PUPeopleAlbumGadget : PUAlbumGadget {

	PXPeopleAlbumProvider* _albumProvider;

}

@property (nonatomic,retain) PXPeopleAlbumProvider * albumProvider;              //@synthesize albumProvider=_albumProvider - In the implementation block
-(id)albumListCellContentView;
-(void)reconfigure;
-(void)contentViewWillAppear;
-(id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2 ;
-(PXPeopleAlbumProvider *)albumProvider;
-(void)_setSubtitleForPeopleCount:(long long)arg1 onAlbumListCellContentView:(id)arg2 ;
-(void)setAlbumProvider:(PXPeopleAlbumProvider *)arg1 ;
-(id)title;
-(void)_peopleAlbumChanged:(id)arg1 ;
-(void)_configureSubtitleForAlbumListCellContentView:(id)arg1 ;
-(void)dealloc;
@end
