/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSProgress.h>

@interface WKDownloadProgress : NSProgress {

	RetainPtr<NSURLSessionDownloadTask>* m_task;
	WeakPtr<WebKit::Download, WTF::EmptyCounter>* m_download;
	RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >* m_sandboxExtension;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDownloadTask:(id)arg1 download:(Download*)arg2 URL:(id)arg3 sandboxExtension:(RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >*)arg4 ;
-(void)unpublish;
-(void)performCancel;
-(void)publish;
-(void)dealloc;
@end
