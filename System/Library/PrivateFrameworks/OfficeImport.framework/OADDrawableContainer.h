/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OADDrawableContainer <NSObject>
@required
-(id)children;
-(void)addChild:(id)arg1;
-(void)removeChild:(id)arg1;
-(void)addChildren:(id)arg1;
-(unsigned long long)childCount;
-(id)childAtIndex:(unsigned long long)arg1;
-(CGRect*)logicalBounds;
-(void)setLogicalBounds:(CGRect)arg1;
-(void)replaceChild:(id)arg1 with:(id)arg2;

@end

