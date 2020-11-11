/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMapTable;

@interface PXCompositeEditorialLayoutSpec : NSObject {

	NSArray* _templates;
	long long _minNumberOfRects;
	long long _maxNumberOfRects;
	long long _minNumberOfColumns;
	NSMapTable* _preferredNextTemplatesByCurrentTemplate;

}

@property (nonatomic,readonly) NSMapTable * preferredNextTemplatesByCurrentTemplate;              //@synthesize preferredNextTemplatesByCurrentTemplate=_preferredNextTemplatesByCurrentTemplate - In the implementation block
@property (nonatomic,readonly) NSArray * templates;                                               //@synthesize templates=_templates - In the implementation block
@property (nonatomic,readonly) long long minNumberOfRects;                                        //@synthesize minNumberOfRects=_minNumberOfRects - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfRects;                                        //@synthesize maxNumberOfRects=_maxNumberOfRects - In the implementation block
@property (nonatomic,readonly) long long minNumberOfColumns;                                      //@synthesize minNumberOfColumns=_minNumberOfColumns - In the implementation block
+(id)defaultSpec;
-(id)init;
-(NSArray *)templates;
-(void)prepareBuiltinSpec;
-(id)preferredNextTemplatesForTemplate:(id)arg1 ;
-(long long)minNumberOfRects;
-(long long)maxNumberOfRects;
-(long long)minNumberOfColumns;
-(NSMapTable *)preferredNextTemplatesByCurrentTemplate;
-(id)_init;
@end
