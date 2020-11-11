/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol JFXEffectFactoryDelegate <NSObject>
@optional
-(void)effectFactory:(id)arg1 effectCategoriesAvailableForType:(int)arg2 completion:(/*^block*/id)arg3;
-(id)effectFactory:(id)arg1 createEffectContentDataSourceForEffectID:(id)arg2 ofType:(int)arg3;

@required
-(void)effectFactory:(id)arg1 effectIDsAvailableForType:(int)arg2 completion:(/*^block*/id)arg3;
-(id)styleTransferEffectIDsForFactory:(id)arg1;
-(BOOL)effectFactory:(id)arg1 isStyleTransferEffectID:(id)arg2;

@end
