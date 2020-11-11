/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSIndexPath, PUTilingDataSource;

@interface PUTilingViewUpdateItem : NSObject {

	long long _action;
	NSIndexPath* _indexPathBeforeUpdate;
	NSIndexPath* _indexPathAfterUpdate;
	PUTilingDataSource* _dataSource;

}

@property (nonatomic,readonly) long long action;                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathBeforeUpdate;              //@synthesize indexPathBeforeUpdate=_indexPathBeforeUpdate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPathAfterUpdate;               //@synthesize indexPathAfterUpdate=_indexPathAfterUpdate - In the implementation block
@property (nonatomic,readonly) PUTilingDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
-(NSIndexPath *)indexPathBeforeUpdate;
-(PUTilingDataSource *)dataSource;
-(NSIndexPath *)indexPathAfterUpdate;
-(id)transformedIndexPath:(id)arg1 withDataSource:(id)arg2 ;
-(id)initWithAction:(long long)arg1 indexPathBeforeUpdate:(id)arg2 indexPathAfterUpdate:(id)arg3 dataSource:(id)arg4 ;
-(long long)action;
@end
