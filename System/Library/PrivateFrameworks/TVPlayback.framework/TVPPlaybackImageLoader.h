/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlaybackImageLoader <NSObject>
@required
-(void)invalidate;
-(id)loadImagesForTimes:(id)arg1 maxSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(void)cancelImageLoadingForIdentifiers:(id)arg1;
-(double)closestImageTimeForTime:(double)arg1;

@end

