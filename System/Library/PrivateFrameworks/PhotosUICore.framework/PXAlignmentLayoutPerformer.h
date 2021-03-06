/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseLayoutPerformer.h>
#import <libobjc.A.dylib/PXMutableLayoutPerformer.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXAlignmentLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer> {

	NSArray* _children;
	long long _xAlignment;
	long long _yAlignment;

}

@property (assign,nonatomic) long long xAlignment;                                //@synthesize xAlignment=_xAlignment - In the implementation block
@property (assign,nonatomic) long long yAlignment;                                //@synthesize yAlignment=_yAlignment - In the implementation block
@property (nonatomic,retain) NSArray * children;                                  //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX31 layoutInput; 
@property (nonatomic,retain) PXLayoutPerformerOutput * layoutOutput; 
+(CGSize)performLayoutWithLayoutInput:(SCD_Struct_PX31)arg1 layoutOutput:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)children;
-(long long)xAlignment;
-(void)preprareForReuse;
-(void)setXAlignment:(long long)arg1 ;
-(long long)yAlignment;
-(void)setYAlignment:(long long)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(CGSize)performLayout;
@end

