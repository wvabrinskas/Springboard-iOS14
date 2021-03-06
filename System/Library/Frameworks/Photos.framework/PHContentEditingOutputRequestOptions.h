/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PHContentEditingOutputRequestOptions : NSObject {

	BOOL _asyncAdjustment;
	BOOL _onlyChangingOriginalChoice;
	BOOL _preferHEICForRenderedImages;
	long long _playbackStyle;

}

@property (assign,getter=isAsyncAdjustment,nonatomic) BOOL asyncAdjustment;                                    //@synthesize asyncAdjustment=_asyncAdjustment - In the implementation block
@property (assign,getter=isOnlyChangingOriginalChoice,nonatomic) BOOL onlyChangingOriginalChoice;              //@synthesize onlyChangingOriginalChoice=_onlyChangingOriginalChoice - In the implementation block
@property (assign,nonatomic) long long playbackStyle;                                                          //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (assign,nonatomic) BOOL preferHEICForRenderedImages;                                                 //@synthesize preferHEICForRenderedImages=_preferHEICForRenderedImages - In the implementation block
-(BOOL)isOnlyChangingOriginalChoice;
-(BOOL)isAsyncAdjustment;
-(BOOL)preferHEICForRenderedImages;
-(void)setAsyncAdjustment:(BOOL)arg1 ;
-(void)setOnlyChangingOriginalChoice:(BOOL)arg1 ;
-(void)setPlaybackStyle:(long long)arg1 ;
-(void)setPreferHEICForRenderedImages:(BOOL)arg1 ;
-(id)description;
-(long long)playbackStyle;
@end

