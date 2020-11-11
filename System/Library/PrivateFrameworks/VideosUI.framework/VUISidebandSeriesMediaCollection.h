/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIMediaCollection.h>

@class VUITVSeriesManagedObject;

@interface VUISidebandSeriesMediaCollection : VUIMediaCollection {

	VUITVSeriesManagedObject* _seriesManagedObject;

}

@property (nonatomic,retain) VUITVSeriesManagedObject * seriesManagedObject;              //@synthesize seriesManagedObject=_seriesManagedObject - In the implementation block
-(id)isLocal;
-(id)title;
-(id)canonicalID;
-(id)HLSColorCapability;
-(id)colorCapability;
-(id)seasonCount;
-(id)showIdentifier;
-(id)initWithMediaLibrary:(id)arg1 seriesManagedObject:(id)arg2 requestedProperties:(id)arg3 ;
-(VUITVSeriesManagedObject *)seriesManagedObject;
-(void)setSeriesManagedObject:(VUITVSeriesManagedObject *)arg1 ;
@end
