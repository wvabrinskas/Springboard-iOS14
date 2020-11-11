/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUCameraImportItemCellDelegate <NSObject>
@required
-(void)handleTouchEvent:(long long)arg1 forCell:(id)arg2;
-(void)importCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
-(long long)contentFillModeForImportCell:(id)arg1;
-(long long)importCell:(id)arg1 requestImageForImportItem:(id)arg2 ofSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4;

@end
