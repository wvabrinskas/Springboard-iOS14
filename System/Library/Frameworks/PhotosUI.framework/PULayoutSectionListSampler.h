/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PULayoutSectionSampler.h>

@interface PULayoutSectionListSampler : PULayoutSectionSampler {

	long long _numberOfVisibleItems;
	long long _numberOfRealItems;
	long long* _visibleItemIndexes;
	long long _lastSeenSampledIndex;
	long long _lastSeenUnsampledIndex;
	long long _lastSeenTopUnsampledIndex;

}
-(long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(BOOL*)arg2 ;
-(long long)unsampledIndexForIndex:(long long)arg1 ;
-(void)enumerateUnsampledIndexesForSampledIndexInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dumpInternalMemory;
-(id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2 ;
-(long long*)visibleItemIndexes;
-(void)dealloc;
@end

