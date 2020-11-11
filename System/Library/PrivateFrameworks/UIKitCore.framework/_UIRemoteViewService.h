/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject {

	BOOL _overridesHostAppearance;
	NSExtension* _extension;
	NSUUID* _contextToken;

}

@property (nonatomic,retain) NSExtension * extension;                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL overridesHostAppearance;              //@synthesize overridesHostAppearance=_overridesHostAppearance - In the implementation block
@property (nonatomic,copy) NSUUID * contextToken;                         //@synthesize contextToken=_contextToken - In the implementation block
-(void)setContextToken:(NSUUID *)arg1 ;
-(NSUUID *)contextToken;
-(id)initWithExtension:(id)arg1 andContextToken:(id)arg2 ;
-(id<PKPlugIn>)plugin;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)updateOverridesHostAppearance;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(NSExtension *)extension;
-(id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2 ;
-(BOOL)overridesHostAppearance;
@end
