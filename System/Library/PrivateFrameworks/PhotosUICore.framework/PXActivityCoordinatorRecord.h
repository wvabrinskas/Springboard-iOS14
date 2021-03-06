/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXActivityCoordinatorItem;
@interface PXActivityCoordinatorRecord : NSObject {

	id<PXActivityCoordinatorItem> _item;

}

@property (assign,nonatomic,__weak) id<PXActivityCoordinatorItem> item;              //@synthesize item=_item - In the implementation block
-(id)initWithItem:(id)arg1 ;
-(id<PXActivityCoordinatorItem>)item;
-(void)setItem:(id<PXActivityCoordinatorItem>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

