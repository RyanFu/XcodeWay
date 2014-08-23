/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTReplacementViewDelegate-Protocol.h"
#import "DVTStatefulObject-Protocol.h"
#import "IDENavigatorOutlineViewLoadingDelegate-Protocol.h"

@class DVTBorderedView, DVTChooserView, DVTExtension, DVTReplacementView, DVTStateToken, IDENavigatorFilterControlBar, NSArrayController, NSMutableDictionary, NSString;

@interface IDENavigatorArea : IDEViewController <IDENavigatorOutlineViewLoadingDelegate, DVTReplacementViewDelegate, DVTStatefulObject>
{
    DVTChooserView *_chooserView;
    DVTBorderedView *_borderedView;
    DVTReplacementView *_replacementView;
    DVTBorderedView *_filterControlBarBorderedView;
    IDENavigatorFilterControlBar *_filterControlBar;
    NSArrayController *_extensionsController;
    DVTExtension *_currentExtension;
    NSMutableDictionary *_perNavigatorCache;
    NSString *_nonMiniDebuggingModeExtensionIdentifier;
    id <DVTObservingToken> _workspaceActivityObservingToken;
    id <DVTObservingToken> _inMiniDebuggingModeObservingToken;
    BOOL _didLoadInitialNavigator;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentNavigator;
+ (id)navigatorsForContext:(id)arg1;
+ (long long)version;
- (void)_cancelWorkspaceActivityObserving;
- (void)_clearPerNavigatorCache;
- (id)_currentExtensionIdentifier;
- (void)_inMiniDebuggingModeChanged;
- (void)_setCurrentExtensionIdentifier:(id)arg1;
- (void)activateFilterFieldForFocus;
- (void)commitStateToDictionary:(id)arg1;
@property DVTExtension *currentExtension; // @synthesize currentExtension=_currentExtension;
- (id)currentNavigator;
- (BOOL)delegateFirstResponder;
@property NSArrayController *extensionsController; // @synthesize extensionsController=_extensionsController;
- (void)installFilterControlBarForNavigator:(id)arg1;
- (void)invalidate;
- (void)loadView;
- (double)minimumContentWidth;
- (void)outlineViewDidDrawInitialContent:(id)arg1;
- (void)outlineViewWillDrawInitialContent:(id)arg1;
- (id)perNavigatorCacheKeyForNavigator:(id)arg1;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (id)supportedContext;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property DVTStateToken *stateToken; // @dynamic stateToken;

@end
