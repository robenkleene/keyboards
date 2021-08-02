# source configure_path.fish
if test -e /usr/local/opt/avr-gcc@8/bin
    set -U fish_user_paths /usr/local/opt/avr-gcc@8/bin $fish_user_paths
end
if test -e /usr/local/opt/arm-gcc-bin@8/bin
    set -U fish_user_paths /usr/local/opt/arm-gcc-bin@8/bin $fish_user_paths
end
