/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CXCallDirectoryStoreIdentificationEntry : NSObject {

	NSString* _extensionBundleIdentifier;
	NSString* _localizedLabel;

}

@property (nonatomic,copy) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel;                         //@synthesize localizedLabel=_localizedLabel - In the implementation block
-(NSString *)localizedLabel;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(void)setExtensionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)extensionBundleIdentifier;
@end

