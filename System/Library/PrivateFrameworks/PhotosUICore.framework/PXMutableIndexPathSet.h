/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXIndexPathSet.h>

@interface PXMutableIndexPathSet : PXIndexPathSet
-(void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)unionIndexPathSet:(id)arg1 ;
-(void)removeIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)addIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeAllIndexPaths;
-(void)minusIndexPathSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

