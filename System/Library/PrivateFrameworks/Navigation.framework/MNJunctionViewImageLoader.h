/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MNJunctionViewImageLoader : NSObject {

	NSArray* _preloadEvents;
	double _imageWidth;
	double _imageHeight;

}
-(id)init;
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(id)_stringForImageIDs:(id)arg1 ;
-(void)imagesForJunctionView:(id)arg1 eventID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_imagesForIDs:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_imagesForRequest:(id)arg1 response:(id)arg2 ;
-(void)setJunctionViewEvents:(id)arg1 ;
-(void)updateForLocation:(id)arg1 remainingDistanceOnRoute:(double)arg2 ;
@end
