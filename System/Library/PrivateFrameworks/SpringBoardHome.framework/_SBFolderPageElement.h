/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SBIconGridImage, SBFolderIcon;

@interface _SBFolderPageElement : NSObject {

	BOOL _gridImagePossible;
	SBIconGridImage* _gridImage;
	unsigned long long _visibleRow;
	unsigned long long _pageIndex;
	SBFolderIcon* _folderIcon;

}

@property (nonatomic,retain) SBIconGridImage * gridImage;                                    //@synthesize gridImage=_gridImage - In the implementation block
@property (assign,getter=isGridImagePossible,nonatomic) BOOL gridImagePossible;              //@synthesize gridImagePossible=_gridImagePossible - In the implementation block
@property (assign,nonatomic) unsigned long long visibleRow;                                  //@synthesize visibleRow=_visibleRow - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                   //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIcon * folderIcon;                               //@synthesize folderIcon=_folderIcon - In the implementation block
-(unsigned long long)pageIndex;
-(unsigned long long)firstVisibleMiniIconIndex;
-(void)setFolderIcon:(SBFolderIcon *)arg1 ;
-(SBFolderIcon *)folderIcon;
-(void)setGridImage:(SBIconGridImage *)arg1 ;
-(void)setGridImagePossible:(BOOL)arg1 ;
-(void)setVisibleRow:(unsigned long long)arg1 ;
-(SBIconGridImage *)gridImage;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstVisibleRowForGap;
-(unsigned long long)visibleRow;
-(BOOL)isGridImagePossible;
@end
